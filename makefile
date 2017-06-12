LIBS =-Wl,-rpath=${CURDIR} -l:provadll.so.1
CXX11 = -std=c++11 -D_GLIBCXX_USE_CXX11_ABI=0
main: main.cpp
	g++ -L. main.cpp -o main $(CXX11) $(LIBS)
