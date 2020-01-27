int main(int ac, char **argv)
{
    int input = atoi(argv[1]);

    if (input == 423)
    {
        int gid = getegid(); // |
        int uid = geteuid(); // -> Get the process owner uid/gid

        setresgid(gid, gid, gid);
        setresuid(uid, uid, uid); // Set uid and gid

        execv("/bin/sh", "/bin/sh");
    }
    else {
        fwrite("No !\n",1,5,(FILE *)stderr);
    }
    return 0;
}