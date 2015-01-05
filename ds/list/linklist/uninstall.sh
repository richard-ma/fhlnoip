export INSTALL_PATH=/usr/local/lib
export INCLUDE_PATH=/usr/local/include

test -e $INSTALL_PATH/liblinklist.so && sudo rm $INSTALL_PATH/liblinklist.so
test -e $INCLUDE_PATH/linklist.h && sudo rm $INCLUDE_PATH/linklist.h
