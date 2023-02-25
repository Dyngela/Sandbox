build:
	cmake -S . ./bin

compile:
	cd ./bin && MSBuild.exe Sandbox.sln

run:
	cd ./bin/Debug && Sandbox.exe