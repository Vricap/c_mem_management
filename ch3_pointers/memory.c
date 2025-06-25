unsigned long size_of_addr(long long i){
  unsigned long sizeof_snek_version = sizeof(i);
  return sizeof(&sizeof_snek_version);
}

int main() {
 unsigned long size = size_of_addr(64); // pointer size will be always 8 bytes on 64-bit system
}
