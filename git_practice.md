Note from udemy class:<br>
git init (create git)<br>
git add <filename> (add to the staging area)<br>
git commit -m "message" (add message comment<br>
git log (check log)<br>
git diff <filename>(check difference)<br>
git checkout <filename> (roll back to the last version)<br>

git remote add origin <githubwebsite> (remote created, able to push local repository onto remote repository)<br>
git push -u origin master (push -u Name of remote Name of Branch)<br>

touch .gitignore (create gitignore file)<br>
git rm --cached -r . (remove all files from staging area)<br>
inside the gitinore file: write file names line by line. # to comment *.txt(means all txt file)<br>

git merge <name> (meger two branch) it will open vim(text-editor) to allows you to add merge message.<br>
 :q! to quit.<br>
git push origin master -u (update to GitHub website)<br>
Rebasing is the process of moving or combining a sequence of commits to a new base commit.<br>

git branch <name> (create new branch)<br>
git branch (show all branch) the name with * is the current branch<br>
git checkout <name> (switch to name branch)<br>

pull request is telling the owner of folk repository why my new request is better<br>

clone is to the local environment.<br>
fork is copied the same remote repository.<br>

![snapshot](https://i.redd.it/8341g68g1v7y.png)

git init<br>
git add .<br>
git commit -a -m "first commit" (adds all tracked files to the staging area and commits them in one step.) https://explainshell.com/explain?cmd=git+commit+-a+-m<br>
git branch -M main<br>
git remote add origin <github website><br>
git push origin main<br>

git status<br>
git log<br>

git commit -m "update"<br>
git add <file name><br>
git push origin main<br>
