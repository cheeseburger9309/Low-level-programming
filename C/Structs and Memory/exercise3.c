/*
Task 3: The Struct Array Search (Coding Task)
You have an array of daemons.

struct Daemon {
    int id;
    int is_active;
};

Write a function struct Daemon* find_daemon(struct Daemon *daemons, size_t count, int search_id).
It should iterate through the array, find the daemon with the matching search_id, 
and return a pointer directly to it. If it doesn't exist, return NULL.
*/