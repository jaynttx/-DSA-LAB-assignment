/*
ques-->4d
(d) Write a program to sort the strings in alphabetical order.
*/

int main() {
    char str[100];
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {

        for (int j = i + 1; str[j] != '\0'; j++) {

            if (str[i] > str[j]) {

                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;

            }
        }
    }

    cout << str;
}
