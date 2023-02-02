def convert(seconds):

    min, sec = divmod(seconds, 60)
    hour, min = divmod(min, 60)
    return "%d:%01d:%01d" % (hour, min, sec)
      
seconds = int(input())
print(convert(seconds))