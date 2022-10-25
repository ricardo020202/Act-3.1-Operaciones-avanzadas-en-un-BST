all: clean runTest1 runTest2 runTest3 runTest4

runTest1:
	g++ -std=c++11 test1.cpp -o runTest1

runTest2:
	g++ -std=c++11 test2.cpp -o runTest2

runTest3:
	g++ -std=c++11 test3.cpp -o runTest3

runTest4:
	g++ -std=c++11 test4.cpp -o runTest4

clean:
ifneq ("$(wildcard ./runTest1)","")
	rm runTest1
endif
ifneq ("$(wildcard ./runTest2)","")
	rm runTest2
endif
ifneq ("$(wildcard ./runTest3)","")
	rm runTest3
endif
ifneq ("$(wildcard ./runTest4)","")
	rm runTest4
endif
