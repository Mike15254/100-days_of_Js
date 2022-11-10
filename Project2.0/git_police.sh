#!/bin/bash

function add_dir {
    # Step 1 : Check if git is initialized
    if [ -d ".git"];then
        # Step 2: Check if already tracked
        for dir in $(cat ~/.my_repos)
            do 
                if [ "$(pwd)" == "$dir" ];then
                    echo "Failed. Directory $(pwd) is already tracked. Aborting..."
                    return
                fi
            done
            # Step 3: We're sure file has git and is not yet tracked
            echo $(pwd) >> ~/.my_repos
            echo "Succesfully added directory $(pwd)"
    else
        echo "Failed. Directory: $(pwd) is not initialized with git"
    fi
}

function count_commits {
    TOTAL_COMMITS=0

    for dir in $(cat ~/.my_repos)
	 do
        COMMITS = $(git log | grep "$(date + '%a %b %-d')" | wc -l)
        echo "$COMMITS in $dir"
        TOTAL_COMMITS = $(($TOTAL_COMMITS + $COMMITS))
     done
     echo "Today's total commits: $TOTAL_COMMITS"
}

if [ "$1" == "add" ]; then
    add_dir
else
    count_commits
fi