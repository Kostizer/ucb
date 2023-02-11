FROM alpine
RUN apk update && apk upgrade && apk add bash
COPY . . 
WORKDIR /somefiles
CMD ["echo", "Hello, Evgeniy"]
ENTRYPOINT "ls" && /bin/bash