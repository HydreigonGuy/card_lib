FROM alpine:latest

RUN apk update && apk upgrade
RUN apk add --no-cache g++ gcc clang make

WORKDIR /app

COPY ./src/* /app/src/
COPY ./headers/* /app/src/
COPY ./Makefile /app/

RUN make

CMD ["/app/exec"]
