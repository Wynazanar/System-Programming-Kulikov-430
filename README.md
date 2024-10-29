# Commands
Команды ОСиС

<h2><b>Запуск контейнера:</b></h2> 
docker run -d -p 80:80 [--name Name] nginx
<i><p>(первые [80] - локальный порт, вторые [80] - ссылка на контейнер) (nginx - название docker'а)</p></i>
<p></p>

<h2><b>Просмотр списка докеров</b></h2> 
<p>docker ps [-a]</p>
<i><p>Выводит список контейнеров</p></i>
<p> </p>

<h2><b>Приостановление докера:</b></h2> 
<p>docker stop [id]</p>
<i><p>Останавливает контейнер</p></i>
<p> </p>

<h2><b>Удаление докера:</b></h2> 
<p>docker rm [id]</p>
<i><p>Удалает контейнер</p></i>
<p> </p>

<h2><b>Создание файла:</b></h2> 
<p>nano(vim) compose.yml</p>
<i><p>...</p></i>

<div>
version: "3.9"
<p>
services:</br>
  nginx:</br>
    image: nginx</br>
    container_name: web-server</br>
    ports:</br>
    - 80:80</br>
  git:</br>
    image: gitea/gitea</br>
    container_name: git-server</br>
    ports:</br>
    - 3000:3000</br>
        </p>
</div>

<h2><b>Создание файла 2:</b></h2> 
<p>nano(vim) index.js</p>
<p>nano(vim) dockerfile</p>
<i><p>...</p></i>

<div>
  <p>
    FROM node:alpine</br>
    COPY index.js /app/index.js</br>
    ENTRYPOINT ["node", "index.js"]</br>
    WORKDIR /app</br>
  </p>
</div>

<h2><b>Создание билда докера:</b></h2> 
<p>docker build -y node-app-330</p>
<i><p>...</p></i>




<h2><b>Что-то там контейнера:</b></h2> 
docker compose up -d
<p></p>

<h2>Выполненные команды в ходе задания</h2>
1. docker run -d -p 80:80 nginx
2. docker run -d -p 3000:3000 gitea/gitea
