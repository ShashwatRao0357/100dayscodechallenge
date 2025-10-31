#include <stdio.h>
#define MAX_SENTENCE_SIZE 200 
#define MAX_WORD_SIZE 100

void find_longest(const char *sen, char *longest) {
    int current_len = 0;
    int max_len = 0;
    int i = 0;
    int current_word_start = 0;
    
    longest[0] = '\0'; 

    while (1) {
        if (sen[i] == ' ' || sen[i] == '\n' || sen[i] == '\0') {
            
            if (current_len > 0) {
                if (current_len > max_len) {
                    max_len = current_len;
                    
                    int k;
                    for (k = 0; k < current_len; k++) {
                        longest[k] = sen[current_word_start + k];
                    }
                    longest[current_len] = '\0'; 
                }
            }
            
            current_len = 0;
            current_word_start = i + 1; 

        } else {
            current_len++;
        }

        if (sen[i] == '\0') {
            break;
        }

        i++;
    }
}

int main() {
    char sentence[MAX_SENTENCE_SIZE];
    char longest_word[MAX_WORD_SIZE];
    
    printf("Enter a sentence: ");
    
    if (fgets(sentence, MAX_SENTENCE_SIZE, stdin) == NULL) {
        return 1;
    }

    find_longest(sentence, longest_word);

    printf("\nOutput:\n");
    if (longest_word[0] != '\0') {
        printf("%s\n", longest_word);
    } else {
        printf("No words found in the sentence.\n");
    }
    
    return 0;
}