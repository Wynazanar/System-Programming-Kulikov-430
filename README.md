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
    - 3000:3000

    </div>

<h2><b>Что-то там контейнера:</b></h2> 
docker compose up -d
<p></p>

<h2>Выполненные команды в ходе задания</h2>
1. docker run -d -p 80:80 nginx
2. docker run -d -p 3000:3000 gitea/gitea
