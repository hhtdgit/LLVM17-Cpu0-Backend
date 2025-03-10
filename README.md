# Cpu0-backend-in-LLVM17

## 介绍

项目路径：https://github.com/hhtdgit/cpu0-backend-in-LLVM17

这个项目是用LLVM17实现基于cpu0的后端。

Cpu0 是一种为教育目的设计的简单 RISC 架构。更多关于 Cpu0 架构的信息可以[在此查看](http://ccckmit.wikidot.com/ocs:cpu0)。

项目主要参考自两个tutorial：

- 一个是llvm官方的cpu0教程，基于llvm3完成。
- 另一个是知乎用户P2Tree创建的，基于LLVM 8完成。

但是两个教程都比较老，现在已经LLVM 17了，很多接口都已经过时，因此我在这里尝试使用LLVM 17重新完成Cpu0后端。

## 中文教程

中文教程会分章节写在我的个人博客中。

我的个人博客地址请点击[这里](http://118.31.14.252/)

### 使用方法

这个项目被分成了多个章节，每一章节列出了需要新增或改动的文件。所有文件的路径都是基于 llvm-project/llvm 目录下的相对路径，可以使用LLVM 17按照顺序实现每一个章节并编译。

## 贡献

欢迎通过github提交issue、通过个人博客网站进行评论、发送邮件来提问或为本项目纠错或做出贡献。



## Introduction

Project path : https://github.com/hhtdgit/cpu0-backend-in-LLVM17

This project is an implementation of a CPU0-based backend using LLVM 17.

Cpu0 is a simple RISC architecture that has been designed for educational purposes. More information about Cpu0 can be found [HERE](http://ccckmit.wikidot.com/ocs:cpu0).

This project mainly references two tutorials:

- One is the official [LLVM CPU0 tutorial](https://jonathan2251.github.io/lbd/about.html), which was completed based on LLVM 3.x
- The other was created by a Zhihu user named P2Tree, based on LLVM 8, link [HERE](https://zhuanlan.zhihu.com/p/351848328). 

However, both tutorials are somewhat outdated now, as we have LLVM 17 available, and many interfaces have since become obsolete. Therefore, I am attempting to complete the CPU0 backend using LLVM 17 here.

## Chinese tutorial

The Chinese tutorial will be written in multiple chapters on my personal blog.

My personal blog is [HERE](http://118.31.14.252/)

## Usage

The project is divided into multiple chapters, with each chapter listing the files that need to be added or modified. The file paths are relative to the llvm-project/llvm directory.You can implement each chapter in sequence and compile it with LLVM 17.

## Contribution

Welcome to submit issues through GitHub, leave comments on my personal blog site, or send emails to ask questions, correct errors, or contribute to this project.