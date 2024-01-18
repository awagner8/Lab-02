#include <stdio.h>
#include <stdlib.h>

void doEncode (
  const unsigned char encode[], 
  const unsigned char str[], 
  unsigned char res[],
  size_t len
) {
  int i = 0;
  while (str[i] != '\0') {
      res[i] = encode[str[i]];
      i++;
    }
    res[i] = '\0';
}

void doDecode (
  const unsigned char encode[], 
  const unsigned char str[],
  unsigned char res[],
  size_t len
) {
  int i = 0;
  while (str[i] != '\0') {
    int j = 0;
    while (1) {
      if (encode[j] == str[i]){
        res[i] = j;
        break;
      }
      j++;
    }
    i++;
  }
    res[i] = '\0';

}
