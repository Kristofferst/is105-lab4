#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
    int fd, sz;
    char *buf = (char *) calloc(2147479552, sizeof(char));
    fd = open("..//Moby-Dick.pdf", O_RDONLY); 
    if (fd < 0) {
       perror("feil ved lesing af fil"); exit(1);
    }
    sz = read(fd, buf, 2147479552);
    close(fd);
}
