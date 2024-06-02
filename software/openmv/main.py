import sensor
import image
import display
import time
from machine import UART
from image import SEARCH_EX, SEARCH_DS

sensor.reset()
sensor.set_pixformat(sensor.GRAYSCALE)
sensor.set_framesize(sensor.QQVGA2)
sensor.set_auto_gain(False)
sensor.set_auto_whitebal(True)
sensor.skip_frames(time = 100)

clock = time.clock()

lcd = display.SPIDisplay()

uart = UART(3, 115200)

templates = [
    "/img/0/1.pgm",
    "/img/0/2.pgm",
    "/img/0/3.pgm",
    "/img/0/4.pgm",
    "/img/0/5.pgm",
    "/img/0/6.pgm",
    "/img/0/7.pgm",
    "/img/0/8.pgm"
]

while(True):
    clock.tick()
    img = sensor.snapshot()

    for t in templates:
        template = image.Image(t)
        r = img.find_template(template, 0.70, step=10, search=SEARCH_EX)
        if r:
            img.draw_rectangle(r,color=(255,0,0))
            print(t)

    lcd.write(img)
