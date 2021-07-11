bubble : bubblemain.o bubbleout.o bubbleinput.o bubblesort.o
	g++ $^ -o $@
%.o : %.cpp
	g++ -c $^
clean :
	rm -r *.o bubble
