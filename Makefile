all: ftree getpid wait

getpid: src/getpid.c
	gcc src/getpid.c -o bin/getpid	

wait: src/getpid.c
	gcc src/wait.c -o bin/wait

ftree: src/fork_tree.c
	gcc src/fork_tree.c -o bin/fork_tree

clean:
	rm -rf ./bin/*

