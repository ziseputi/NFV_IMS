int handleRegistrationRequest(int epollfd,int cur_fd, map<int, mdata> &fdmap, mdata &fddata, char * ServerAddress, int port, epoll_event &new_file_descriptor_to_watch);
int handlecase3(int epollfd,int cur_fd, map<int, mdata> &fdmap, mdata &fddata,  char * ServerAddress, int port, epoll_event &new_file_descriptor_to_watch);
int handlecase5(int epollfd,int cur_fd, map<int, mdata> &fdmap, mdata &fddata,  char * ServerAddress, int port, epoll_event &new_file_descriptor_to_watch);
