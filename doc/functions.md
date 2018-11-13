## I/O functions

moe | c
---- | ----
bangou hanashitekudasai(zutto kyarakutaa \*format, ...) | int printf(const char \*format, ...)
bangou kiitekudasai(zutto kyarakutaa \*format, ...) |int scanf(const char \*format, ...)
bangou sukoshihanashite() |int getchar()
bangou sukoshikiite(bangou char) |int putchar(int char)
nanimo taihendesuyo(zutto kyarakutaa \*s) |void perror(const char \*s)

## String functions
moe | c
---- | ----
kyarakutaa \*kyarafyuujon(kyarakutaa \*dest, zutto kyarakutaa \*src) |char \*strcat(char \*dest, const char \*src)
bangou kyaraonaji(zutto kyarakutaa \*str1, zutto kyarakutaa \*str2) |int strcmp(const char \*str1, const char \*str2)
kyarakutaa \*kyarakopii(kyarakutaa \*dest, zutto kyarakutaa \*src) |char \*strcpy(char \*dest, const char \*src)
zutto kyarakutaa \*kyarasagashite(zutto kyarakutaa \*str, zutto kyarakutaa \*target) |const char \*strstr(const char \*str, const char \*target)

## Math functions
*To be defined~*

## Random functions
moe | c
--- | ---
time_t jikan(time_t\* t) | time_t time(time_t\* t)
bangou gacha() | int rand()
nanimo gachapon(pojichibu seed) |void srand(unsigned seed)

## Process functions
moe | c
--- | ---
pid_t kodomo() | pid_t fork()
pid_t matte(bangou \*wstatus) |pid_t wait(int \*wstatus)
hikikomori | case -1
musuko | case 0
otoosan | default

## Memory functions
moe | c
--- | ---
nanimo\* sashiagete(size_t size) |void\* malloc(size_t size)
nanimo\* risutowosashiagete(size_t num, size_t size) |void\* calloc(size_t num, size_t size)
nanimo hima(nanimo \*ptr) |void free(void \*ptr)

## Other functions
moe | C
--- | ---
bangou hajimete (bangou awgc, kyarakutaa \*\*awgv) | int main (int argc, char \*\*argv)
nanimo deru(bangou code) |void exit(int code)
bangou bangounikawaru(zutto kyarakutaa \*str) | int atoi(char \*str)
pojichibu bangou nemuru(pojichibu bangou s) | unsigned int sleep(unsigned int s)
