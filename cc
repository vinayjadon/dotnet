Last login: Wed May 16 17:27:20 on ttys002
MacBook-Pro:~ vinayjadon$ echo "# dotnet" >> README.md
MacBook-Pro:~ vinayjadon$ git init
Initialized empty Git repository in /Users/vinayjadon/.git/
MacBook-Pro:~ vinayjadon$ git add README.md
MacBook-Pro:~ vinayjadon$ git commit -m "first commit"
[master (root-commit) 8db548f] first commit
 Committer: Vinay Jadon <vinayjadon@MacBook-Pro.local>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 1 insertion(+)
 create mode 100644 README.md
MacBook-Pro:~ vinayjadon$ git remoter add origin https://github.com/vinayjadon/dotnet.git
git: 'remoter' is not a git command. See 'git --help'.

The most similar command is
	remote
MacBook-Pro:~ vinayjadon$ git remote add origin https://github.com/vinayjadon/dotnet.git
MacBook-Pro:~ vinayjadon$ git push -u origin master
Username for 'https://github.com': vinayjadon
Password for 'https://vinayjadon@github.com': 
Counting objects: 3, done.
Writing objects: 100% (3/3), 231 bytes | 231.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0)
To https://github.com/vinayjadon/dotnet.git
 * [new branch]      master -> master
Branch 'master' set up to track remote branch 'master' from 'origin'.
MacBook-Pro:~ vinayjadon$ echo "vinay jadon first git hub sentence" >> vinay.txt
MacBook-Pro:~ vinayjadon$ git init
Reinitialized existing Git repository in /Users/vinayjadon/.git/
MacBook-Pro:~ vinayjadon$ git add vinay.txt
MacBook-Pro:~ vinayjadon$ git commit -m "done"
[master 69ede7b] done
 Committer: Vinay Jadon <vinayjadon@MacBook-Pro.local>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 1 insertion(+)
 create mode 100644 vinay.txt
MacBook-Pro:~ vinayjadon$ git remote add origin https://github.com/vinayjadon/dotnet.git
fatal: remote origin already exists.
MacBook-Pro:~ vinayjadon$ git push -u origin master
Counting objects: 3, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (2/2), done.
Writing objects: 100% (3/3), 317 bytes | 317.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0)
To https://github.com/vinayjadon/dotnet.git
   8db548f..69ede7b  master -> master
Branch 'master' set up to track remote branch 'master' from 'origin'.
MacBook-Pro:~ vinayjadon$ echo "…or create a new repository on the command line" >> README.md
MacBook-Pro:~ vinayjadon$ echo "# python" >> README.md
MacBook-Pro:~ vinayjadon$ git init
Reinitialized existing Git repository in /Users/vinayjadon/.git/
MacBook-Pro:~ vinayjadon$ git add README.md
MacBook-Pro:~ vinayjadon$ git commit -m "first commit"
[master c05b54d] first commit
 Committer: Vinay Jadon <vinayjadon@MacBook-Pro.local>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 2 insertions(+)
MacBook-Pro:~ vinayjadon$ git remote add origin https://github.com/vinayjadon/python.git
fatal: remote origin already exists.
MacBook-Pro:~ vinayjadon$ git push -u origin master
Counting objects: 3, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 349 bytes | 349.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0)
To https://github.com/vinayjadon/dotnet.git
   69ede7b..c05b54d  master -> master
Branch 'master' set up to track remote branch 'master' from 'origin'.
MacBook-Pro:~ vinayjadon$ …or push an existing repository from the command line
-bash: …or: command not found
MacBook-Pro:~ vinayjadon$ git remote add origin https://github.com/vinayjadon/python.git
fatal: remote origin already exists.
MacBook-Pro:~ vinayjadon$ git init
Reinitialized existing Git repository in /Users/vinayjadon/.git/
MacBook-Pro:~ vinayjadon$ git add /Users/vinayjadon/Desktop/Python/t1.py
MacBook-Pro:~ vinayjadon$ git commit -m "done"
[master 56ed918] done
 Committer: Vinay Jadon <vinayjadon@MacBook-Pro.local>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 1 insertion(+)
 create mode 100644 Desktop/Python/t1.py
MacBook-Pro:~ vinayjadon$ git push -u origin master
Counting objects: 5, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (2/2), done.
Writing objects: 100% (5/5), 416 bytes | 416.00 KiB/s, done.
Total 5 (delta 0), reused 0 (delta 0)
To https://github.com/vinayjadon/dotnet.git
   c05b54d..56ed918  master -> master
Branch 'master' set up to track remote branch 'master' from 'origin'.
MacBook-Pro:~ vinayjadon$ cd ~/
MacBook-Pro:~ vinayjadon$ git status
On branch master
Your branch is up to date with 'origin/master'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)

	.CFUserTextEncoding
	.DS_Store
	.IdentityService/
	.ServiceHub/
	.Trash/
	.Xauthority
	.android/
	.bash_history
	.bash_profile
	.bash_profile.pysave
	.bash_sessions/
	.bitnami/
	.cache/
	.config/
	.emulator_console_auth_token
	.idlerc/
	.local/
	.mono/
	.nuget/
	.oracle_jre_usage/
	.ssh/
	.templateengine/
	Applications/
	Desktop/.DS_Store
	Desktop/.localized
	Desktop/Python Dev/
	Desktop/Python/.DS_Store
	Desktop/Python/.idea/
	Desktop/Python/venv/
	Desktop/last.log
	Documents/
	Downloads/
	Library/
	Movies/
	Music/
	Pictures/
	Projects/
	Public/
	django/

nothing added to commit but untracked files present (use "git add" to track)
MacBook-Pro:~ vinayjadon$ git clone https://github.com/vinayjadon/donet.git
Cloning into 'donet'...
remote: Repository not found.
fatal: repository 'https://github.com/vinayjadon/donet.git/' not found
MacBook-Pro:~ vinayjadon$ git clone https://github.com/vinayjadon/dotnet.git
Cloning into 'dotnet'...
remote: Counting objects: 14, done.
remote: Compressing objects: 100% (8/8), done.
remote: Total 14 (delta 0), reused 14 (delta 0), pack-reused 0
Unpacking objects: 100% (14/14), done.
MacBook-Pro:~ vinayjadon$ git status
On branch master
Your branch is up to date with 'origin/master'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)

	.CFUserTextEncoding
	.DS_Store
	.IdentityService/
	.ServiceHub/
	.Trash/
	.Xauthority
	.android/
	.bash_history
	.bash_profile
	.bash_profile.pysave
	.bash_sessions/
	.bitnami/
	.cache/
	.config/
	.emulator_console_auth_token
	.idlerc/
	.local/
	.mono/
	.nuget/
	.oracle_jre_usage/
	.ssh/
	.templateengine/
	Applications/
	Desktop/.DS_Store
	Desktop/.localized
	Desktop/Python Dev/
	Desktop/Python/.DS_Store
	Desktop/Python/.idea/
	Desktop/Python/venv/
	Desktop/last.log
	Documents/
	Downloads/
	Library/
	Movies/
	Music/
	Pictures/
	Projects/
	Public/
	django/
	dotnet/

nothing added to commit but untracked files present (use "git add" to track)
MacBook-Pro:~ vinayjadon$ 
