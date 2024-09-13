1. ssh bandit0@bandit.labs.overthewire.org -p 2220
#used this command cause bandit0 is the username and so bandit0@bandit.labs.overthewire.org and port is -p 2220
after that i just typed the password which is bandit0 

2. ls, cat readme
i used ls, which lists all the files in the directory. then i used the cat readme, readme is the file name and cat reads out the infomation listed in the mentioned file
THE PASSWORD OBTAINED : ZjLjTmM6FvvyRnrb2rfNWOZOTa6ip5If

3. ls, cat ./-
in this task, the file contains a name  -  which is already a linux standard function so we cant use cat -. instead we use ./- to indicate the directory to the cat command
THE PASSWORD OBTAINED : 263JGJPfgU6LtdEvgfWU1XP5yac29mFx    

4. ls, cat "spaces in this filename"
cat ("") are used when there are spaces in file name and they cant be accessed by cat command directly so the ("") help them to access the file and read it
THE PASSWORD OBTAINED : MNk8KNH3Usiio41PRUEoDFPqfxLPlSmx

5. ls, cd inhere, ls -a, cat ...Hiding-From-You
ls listed out the directories, which revealed inhere, and cd helps us get into that directory by which we use ls -a, which reveals all files including hidden files. then we just open the hidden file using cat command 
THE PASSWORD OBTAINED :2WmrDFRmJIq3IPxneAaMGhap0pFhF3NJ

6. ls, cd inhere ,ls, cat <-file07
ls listed out directories containing inhere, and then ls revealed 10 files, if you open the files one by one using cat command you will find the password in the 7th file. there might be a better way to find out the file but i havent learned it yet.
THE PASSWORD OBTAINED :4oQYVPkxZOOEOO5pTW81FB8j8lxXGUQw

7. ls, cd inhere, ls, find . -readable -size 1033x ! -executable , cat maybeinhere/.file2
ls listed out inhere, then if we use ls again we can see multiple directories show up, so -find command helps us find a specific file were searching for as mentioned in the question,
the size was 1033px, it was a readable file and executable. cat maybeinhere/.file 2 just helps u to get into the directory and read the file.
THE PASSWORD OBTAINED: HWasnPhtq9AVKe0dmk45nxy20cvUa6EG

8. ls-a, find / -user bandit7 -group bandit6 -size 33c, cat /var/lib/dpkg/info/bandit7.password
ls -a, to list out all the hidden files and directories, then we gotta get into the user, bandit7, so we use the find command again and specify the group and size as we did before.it opens up a list of directories in which a specific file has an ending password, then we use cat and paste the directory and we get the password.
THE PASSWORD OBTAINED : morbNTDkSW6jIlUc0ymOdMaLnOlFVAaj

9. ls,cat data.txt, grep millionth data.txt
ls shows the only file thats exist in the directory, which is data.txt, when u use cat on it you get a big text file, normally you cant read every word and find the password, thats why we use the grep command which is useful for searching and matching text patterns in a file, we enter the keyword 'millionth' and we got the password
THE PASSWORD OBTAINED : dfwvzFQi4mU0wfNbFOe9RoWskMLg7eEc

8.ls, cat data.txt, sort data.txt | uniq -u
we used the sort command cause it sorts out the file content in alphabetic order. the uniq command filters out the repeated lines in a file.
THE PASSWORD OBTAINED: 4CKMh1JI91bUIZZPXDqGanal4xvAg0JM

9.ls, cat data.txt, strings data.txt | grep "=="
strings file searches for any printable strings in the file, and grep is used here specifically to find the line that have == in them. to specifically find the password
THE PASSWORD OBTAINED :FGUW5ilLVJrxX9kMYMmlN4MgbpfMiqey