*This project has been created as part of the 42 curriculum by schoute42*

# Description 

## Project Push_Swap

The push_swap program allows you to sort a stack A, with the following constraints: it must use only one other stack to achieve this, no more, no less; it is not allowed to use any operations other than those mentioned below: 

* **push** from A to B 

* **push** from B to A 

* **rotate** in A

* **rotate** in B

* **reverse rotate** in A

* **reverse rotate** in B

* **double rotate** 

* **double reverse rotate**.

# Bonus checker

The bonus part is a **checker** that receives **integers as arguments** and **instructions** that it will apply to the list of arguments. At the end, it checks if **stack A** is sorted and **stack B** is empty. If so, it prints `OK`, otherwise it prints `KO`.

The allowed instructions are the same as in **push_swap**. If the checker receives an **unauthorized instruction**, it prints `Error` and exits.

## instructions

### compilation 

````
make
````
### Usage 
````
./push_swap <list of integer>
````
### Test push_swap

Bash :

````bash
ARG=$(shuf -i 1-500 -n 500 | tr '\n' ' '); ./push_swap $ARG | wc -l
````

Zsh :

````bash
ARG=$(shuf -i 1-500 -n 500 | tr '\n' ' '); ./push_swap ${=ARG} | wc -l
````
### Test with checker

Bash :

````bash
ARG=\$(shuf -i 1-500 -n 500 | tr '\n' ' '); ./push_swap \$ARG | ./checker \$ARG
````

Zsh :

```bash
ARG=\$(shuf -i 1-500 -n 500 | tr '\n' ' '); ./push_swap \${=ARG} | ./checker \${=ARG}
```
## Resources

- [Push_swap - YouTube video](https://youtu.be/wRvipSG4Mmk?si=hWKyeGPYsf-1ZUo-) — This video helped me understand the logic behind the Turk algorithm and the cost calculation. I only watched the explanation part and avoided the spoiler section containing the code.

### AI Usage

AI was used as a support tool for this project:
- Helped with the writing of this README and learning Markdown syntax.
- Helped me track down a sneaky bug related to the usage of get_next_line during the debugging of memory leaks.
- Helped me understand theoretical concepts of the project, such as how the checker was supposed to work.
