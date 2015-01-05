export INSTALL_PATH=/usr/local/lib
export INCLUDE_PATH=/usr/local/include

test -e $INSTALL_PATH/libarraylist.so && sudo rm $INSTALL_PATH/libarraylist.so
test -e $INCLUDE_PATH/arraylist.h && sudo rm $INCLUDE_PATH/arraylist.h
