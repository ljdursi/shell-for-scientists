#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    const int MAXLINELEN=129;
    char line[MAXLINELEN];

    while ( fgets(line, MAXLINELEN, stdin) != NULL ) {
        int value;
        int count;      
        char label[MAXLINELEN];

        int nread = sscanf(line, "%d %s %d\n", &count, label, &value);
        if (nread == 3) {
            fprintf( stdout, "%4d ", value );
            for (int i=0; i<count; i++) 
                fprintf( stdout, "#" );
            fprintf( stdout, "\n");
        }
    
    }
}
