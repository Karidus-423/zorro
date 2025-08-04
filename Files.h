char *ReadFile(const char *filename) {
  FILE *f = fopen(filename, "r");
  if (!f) {
    perror("fopen");
  }
  fseek(f, 0, SEEK_END);
  long length = ftell(f);
  rewind(f);
  char *bfr = malloc(sizeof(char) * length);

  fread(bfr, sizeof(char), length, f);

  fclose(f);
  return bfr;
}
