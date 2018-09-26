sudo apt-get install git
git --version
mkdir labs7
cd labs7
git init
git config --global user.name 'aginsebastian'
git config --global user.email 'aginsebastian@gmail.com'
git add .
git status
git commit -m "first commit"
git remote add origin https://github.com/aginsebastian/labs7.git
git push -u origin master
git pull
