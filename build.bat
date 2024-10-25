zcc +msx -create-app -O3 -lm -subtype=msxdos jiffy.c -bn JIFFY.COM
del JIFFY.img
move /y JIFFY.COM bin
cd bin
START /WAIT DISKMGR.exe -A -F -C JIFFY.DSK JIFFY.COM
cd ../
