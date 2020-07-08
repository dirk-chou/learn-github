
GitHub（apple ID 超级密码）
Personal access tokens:
已安装git version 2.24.3 (Apple Git-128)
git config --list查看配置的username，email，buffer  按Q退出

git config --global user.name "dirk-chou"
git config --global user.email "dirkchou@icloud.com"
配置大小写敏感
git config --global core.ignorecase false

通过终端命令创建ssh key
ssh-keygen -t rsa -C "dirkchou@icloud.com"
直接回车   默认路径，配置密码（passphrase）kissmyass
生成的key保存在～/.ssh/id_rsa.pub里

修改代码，cd 到工程目录
git add . (当前目录)
git commit -m "说明文字"
git push(会要求输入git登录名密码)
