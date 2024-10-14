# Артём Максимчев, 231-3212

FROM ubuntu:18.04
RUN apt-get update && apt-get install -y g++

WORKDIR /MyProj_231-3212_Maksimchev
COPY program.cpp .

RUN g++ -o my_Program program.cpp

ENV N=14
CMD ["sh", "-c", "./my_Program $N"]
