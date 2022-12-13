/* By now we know that we can traverse an array using pointers. Moreover, we also know that we can dynamically allocate (contiguous) memory using blocks pointers. These two aspects can be combined to dynamically allocate memory for an array. This is illustrated in the following code.

// Allocate memory to store five characters
int n = 5;
char *pvowels = (char *) malloc(n * sizeof(char));
int i;

pvowels[0] = 'A';
pvowels[1] = 'E';
*(pvowels + 2) = 'I';
pvowels[3] = 'O';
*(pvowels + 4) = 'U';

for (i = 0; i < n; i++) {
    printf("%c ", pvowels[i]);
}

printf("\n");

free(pvowels);

In the above code, we allocated five contiguous bytes of memory to store five characters. Subsequently, we used array notations to traverse the blocks of memory as if pvowels is an array. However, remember that pvowels actually is a pointer. Pointers and arrays, in general, are not the same thing.

So when is this useful? Remember that while declaring an array, the number of elements that it would contain must be known beforehand. Therefore, in some scenarios it might happen that the space allocated for an array is either less than the desired space or more. However, by using dynamic memory allocation, one can allocate just as much memory as required by a program. Moreover, unused memory can be freed as soon as it is no longer required by invoking the free() function. On the down side, with dynamic memory allocation, one must responsibly call free() wherever relevant. Otherwise, memory leaks would occur.

We conclude this tutorial by looking at dynamic memory allocation for a two-dimensional array. This can be generalized to n-dimensions in a similar way. Unlike one-dimensional arrays, where we used a pointer, in this case we require a pointer to a pointer, as shown below.

int nrows = 2;
int ncols = 5;
int i, j;

// Allocate memory for nrows pointers
char **pvowels = (char **) malloc(nrows * sizeof(char *));

// For each row, allocate memory for ncols elements
pvowels[0] = (char *) malloc(ncols * sizeof(char));
pvowels[1] = (char *) malloc(ncols * sizeof(char));

pvowels[0][0] = 'A';
pvowels[0][1] = 'E';
pvowels[0][2] = 'I';
pvowels[0][3] = 'O';
pvowels[0][4] = 'U';

pvowels[1][0] = 'a';
pvowels[1][1] = 'e';
pvowels[1][2] = 'i';
pvowels[1][3] = 'o';
pvowels[1][4] = 'u';

for (i = 0; i < nrows; i++) {
    for(j = 0; j < ncols; j++) {
        printf("%c ", pvowels[i][j]);
    }

    printf("\n");
}

// Free individual rows
free(pvowels[0]);
free(pvowels[1]);

// Free the top-level pointer
free(pvowels); */





