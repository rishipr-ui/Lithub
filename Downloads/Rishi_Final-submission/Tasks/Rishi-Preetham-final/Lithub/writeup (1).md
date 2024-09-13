1. git stash - This command saves all the changes in your directory

2. git checkout main - we use this command to switch to the specified branch 

3. git pull - This command is used to update your current repository from the remote repository. 

4. git log - this command is used to list out all the old commits used 

5. git show <hash> - we use this to  get the details of changes made through that commit.

6.  git checkout "0PCF07O3WM" - we use this command to switch branch 

7.  unzip protected.zip used to unzip a zipped file and then we enter the password for it ( the commit hash)

8. Command which is used  to decompress
  7z x protected.7z ( used to unzip 7z files)
  gzip -d misc.zip.xz.zst.bz2.gz ( continous de compression to gain access to misc file)
  bzip2 misc.zip.xz.zst.bz2 -d
  unzstd misc.zip.xz.zst
  unxz misc.zip.xz
  unzip misc.zip
  tar -xf misc.tar

9. ls -d misc/*/ | grep -E '/[0-9]{2}.*[0-9]{2}/$' - This command is used to find the directory stand and ending with 2 numbers as mentioned in the 
task

10. cd 56F6Y13/ - This command is used to get into the directory

11. sort * | uniq -d - This command is used to filter the files and makes sure the output containes only the duplicated files.

12. sort * | uniq -d | sed -n '6p' - we used sed (stream editor) to print out the 6th line from the output

13. sed 's/8/B/g' - This command was used to swap out the 8 with B using sed

14. echo "I am learning Git" > EFVBNBQ"** - used this command to make a new file and input into it

15. git add -f EFVBNBQ Basically forcing it (forced it because  the path was ignored by the .gitignore files)

16. git commit -m "msg" committing a file.

16. git reset --soft HEAD~1 - Reverting the commit

17. git remote set-url origin git@github.com:rishipr-ui/Lithub.git - adding a remote repository to my local repository

18. nano wrietup.md - creates a text file in which all the commands used should be uploaded

19. git add writeup.md - to stage the writeup.md

20. git commit -m "msg" - to commit changes.

21.  git push origin main - to push the commits to the main branch.
