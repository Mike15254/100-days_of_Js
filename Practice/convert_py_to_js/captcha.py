from captcha.image import ImageCaptcha
# specify the name size

image = ImageCaptcha(width = 300, height = 100)

# specify the text of the color

captcha_text = input("Enter captcha text : ")

# generate the image of the given text
data = image.generate(captcha_text)

# clcoding.com
# write the image on given file and save it
image.write(captcha_text, 'CAPTCHA1.png')
from PIL import Image

image.open('CAPTCHA1.png')