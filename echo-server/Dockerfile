FROM alpine:latest
RUN apk update && apk add --no-cache cmake make g++ qt6-qtbase-dev

COPY server /server
WORKDIR /server

RUN cmake -DCMAKE_BUILD_TYPE=Release . && \
    cmake --build .

CMD ["./server"]
