#!/bin/bash

gcc ./main.c -o main
chmod +x ./main
mv ./main /usr/local/bin/wantyapps
chmod +x /usr/local/bin/wantyapps
if [ ! "~/.wantyapps" ]
then
	mkdir ~/.wantyapps/
	mkdir ~/.wantyapps/assets/
	mkdir ~/.wantyapps/assets/binary/
fi
