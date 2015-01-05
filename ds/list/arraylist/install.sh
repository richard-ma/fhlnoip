export INSTALL_PATH=/usr/local/lib
export INCLUDE_PATH=/usr/local/include

test -e $INSTALL_PATH/libarraylist.so || sudo ln -s $PWD/libarraylist.so.1.0.0 $INSTALL_PATH/libarraylist.so
test -e $INCLUDE_PATH/arraylist.h || sudo ln -s $PWD/arraylist.h $INCLUDE_PATH/arraylist.h
