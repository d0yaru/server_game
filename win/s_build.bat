@echo off

g++ -c s_main.cpp
g++ -c MyRender.cpp

g++ -c engine/Log.cpp

g++ -o server s_main.o MyRender.o Log.o

server.exe
pause