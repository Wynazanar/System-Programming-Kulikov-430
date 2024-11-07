# Commands
Команды ОСиС

# Запуск контейнера
`docker run -d -p 80:80 [--name Name] nginx`
<i><p>(первые [80] - локальный порт, вторые [80] - ссылка на контейнер) (nginx - название docker'а)</p></i>
<p></p>

# Просмотр списка докеров 
`docker ps [-a]`
<i><p>Выводит список контейнеров</p></i>
<p> </p>

# Приостановление докера 
`docker stop [id]`
<i><p>Останавливает контейнер</p></i>
<p> </p>

# Удаление докера 
`docker rm [id]`
<i><p>Удалает контейнер</p></i>
<p> </p>

<h2><b>Создание файла:</b></h2> 
<p>nano(vim) compose.yml</p>
<i><p>...</p></i>

```
version: "3.9"

services:
  nginx:
    image: nginx
    container_name: web-server
    ports:
    - 80:80
  git:
    image: gitea/gitea
    container_name: git-server
    ports:
    - 3000:3000</br>
```
# Создание файла 2: 
<p>nano(vim) index.js</p>
<div>
  <p>
    console.log("Hello, world!")</br>
  </p>
</div>

<p>nano(vim) dockerfile</p>
<i><p>...</p></i>

<div>
  <p>
    FROM node:alpine</br>
    WORKDIR /app</br>
    COPY index.js /app/index.js</br>
    ENTRYPOINT ["node", "index.js"]</br>
  </p>
</div>

<h2><b>Создание билда докера:</b></h2> 
<p>docker build -t node-app-330 ./</p>
<i><p>...</p></i>




<h2><b>Что-то там контейнера:</b></h2> 
docker compose up -d
<p></p>

<h2>Выполненные команды в ходе задания</h2>
1. docker run -d -p 80:80 nginx
2. docker run -d -p 3000:3000 gitea/gitea
