#!/usr/bin/python3

import sys

bitmap = """
....................................................................
   **************   *  *** **  *      ******************************
  ********************* ** ** *  * ****************************** *
 **      *****************       ******************************
          *************          **  * **** ** ************** *
           *********            *******   **************** * *
            ********           ***************************  *
   *        * **** ***         *************** ******  ** *
               ****  *         ***************   *** ***  *
                 ******         *************    **   **  *
                 ********        *************    *  ** ***
                   ********         ********          * *** ****
                   *********         ******  *        **** ** * **
                   *********         ****** * *           *** *   *
                     ******          ***** **             *****   *
                     *****            **** *            ********
                    *****             ****              *********
                    ****              **                 *******   *
                    ***                                       *    *
                    **     *                    *
...................................................................."""

print('Bitmap message, by mikemax')
print('Enter the message to print with the bitmap.')
message = input('>')

if message == '':
    sys.exit()

# Loop over each line in the bitmap

for line in bitmap.splitlines():
    # loop over each character in the line
    for i , bit in enumerate(line):
        if bit == ' ':
            # Print an empty space since there is an empty space in the bit map
            print(' ', end='')
        else:
            # Print character from the message:
            print(message[i % len(message)], end='')
    print() # Print a new line
