# Full-Homomorphic-Encrypted-Data-Analysis-System

定义用户Alice，服务器Charlie（不可信的信息处理者）
Alice掌握公钥pk和私钥sk，加密算法Encrypt和解密算法Decrypt
Alice选择一种数据处理方式Evaluate，在此平台下可选的操作有例如求均值、方差等
Alice得到待处理的一组数据a=a1a2a3…an（明文），结合密钥，用加密算法分别计算每一个数据mi=Encrypt(ai)，得到密文m=m1m2m3…mn
Alice将密文和数据处理方式打包发给服务器Charlie
Charlie解析收到的数据包，处理加密数据m，得到处理结果b=Evaluate(m)
Charlie将处理结果b发还给Alice
Alice收到处理好的结果b，用解密算法得到最终结果c=Decrypt(b)=Evaluate(a)

本项目为客户端：
数据处理可视化平台客户端
支持自定义输入公钥pk与私钥sk。
需要输入服务器的ip与端口号进行连接。
连接成功之后进入数据编辑录入界面，支持手动录入和文件导入的方法
选择需要的数据处理方式，将其代号与录入完成的数据打包成json格式发送给服务器
接收到服务器处理好的数据之后，将其解密，得到最终想要的数据分析结果


未完成部分：数据加密，从服务器接收数据，解密数据
