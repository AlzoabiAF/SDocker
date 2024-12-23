FROM alpine:latest 

WORKDIR /app

RUN apk --no-cache add \
    nginx \
    build-base \
    fcgi-dev \
    spawn-fcgi

COPY ./nginx/nginx.conf /etc/nginx/nginx.conf
COPY ./server/main.c .

RUN adduser  -D  user && \
    chown -R user:user /app && \
    chown -R user:user /usr && \
    chown -R user:user /var && \
    chown -R user:user /run

USER user

HEALTHCHECK CMD curl -f http://localhost:8080/ || exit 1

CMD gcc -o server main.c -lfcgi && spawn-fcgi -p 8080 ./server && nginx -g 'daemon off;'