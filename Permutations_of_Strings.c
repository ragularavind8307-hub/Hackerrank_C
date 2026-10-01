int next_permutation(int n, char **s)
{
    int i = n - 2;
    while (i >= 0 && strcmp(s[i], s[i + 1]) >= 0) {
        i--;
    }
    if (i < 0) 
        return 0;
    int j = n - 1;
    while (strcmp(s[i], s[j]) >= 0) {
        j--;
    }
    char *temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    int start = i + 1;
    int end = n - 1;
    while (start < end) {
        char *rev_temp = s[start];
        s[start] = s[end];
        s[end] = rev_temp;
        start++;
        end--;
    }
    
    return 1;
}
