// process state
// NEED TO ADD some sort of define(?)
struct pstat {
	int pid, ppid;
	char state;
	char name[16];
};