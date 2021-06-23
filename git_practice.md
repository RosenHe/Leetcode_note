Note from udemy class:<br>
<b>git init</b> (create git)<br>
<b>git add <filename> </b> (add to the staging area)<br>
<b>git commit -m "message" </b> (add message comment)<br>
<b>git log </b> (check log)<br>
<b>git diff <filename></b>(check difference)<br>
<b>git checkout <filename> </b> (roll back to the last version)<br>

<b>git remote add origin </b> <githubwebsite> (remote created, able to push local repository onto remote repository)<br>
<b>git push -u origin master </b>(push -u Name of remote Name of Branch)<br>

<b>touch .gitignore </b> (create gitignore file)<br>
<b>git rm --cached -r . </b>(remove all files from staging area)<br>
inside the gitinore file: write file names line by line. # to comment *.txt(means all txt file)<br>

<b>git merge 'name' </b>(meger two branch) it will open vim(text-editor) to allows you to add merge message.<br>
<b> :q! </b>to quit.<br>
<b>git push origin master -u </b>(update to GitHub website)<br>
Rebasing is the process of moving or combining a sequence of commits to a new base commit.<br>

<b>git branch 'name' </b> (create new branch)<br>
<b>git branch </b>(show all branch) the name with * is the current branch<br>
<b>git checkout 'name' </b>(switch to name branch)<br>

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
