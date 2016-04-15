/*******************************************************************************
Copyright: 2015, Innovem Tech. Co., Ltd.
FileName: EchoServer.h
*******************************************************************************/
#ifndef _EchoServer_H_
#define _EchoServer_H_

#include <muduo/net/TcpServer.h>

class EchoServer
{
    public:
        EchoServer(muduo::net::EventLoop *loop,
                const muduo::net::InetAddress &listenAddr);
        void start();
    private:
        void onConnection(const muduo::net::TcpConnectionPtr &conn);
        void onMessage(const muduo::net::TcpConnectionPtr &conn,
                muduo::net::Buffer *buf,
                muduo::Timestamp time);
        muduo::net::TcpServer m_Server;
};

#endif
