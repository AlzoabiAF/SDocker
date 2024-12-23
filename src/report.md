# DO5_SimpleDocker  

## Part 1. Готовый докер  

**1. Скачаем официальный образ nginx**  
![images](images/part1/pull.png)  

**2. Проверим наличие образа**  
![images](images/part1/images.png)  

**3. Запустим докер-образ**  
![images](images/part1/run.png)  

**4. Проверим, что контейнер запустился**  
![images](images/part1/ps1.png)  

**5. Посмотрим информацию о контейнере через ```docker inspect [container_id|container_name]```**  
- Размер контейнера  
![images](images/part1/size.png)  
- Список замапленных портов  
![images](images/part1/ports.png)  
-  ip контейнера  
![images](images/part1/ip.png)  

**6. Остановим докер контейнер**  
![images](images/part1/stop.png)  

**7. Проверим, что контейнер остановился**  
![images](images/part1/ps2.png)  

**8. Запустим докер с портами 80 и 443 в контейнере, замапленными на такие же порты на локальной машине**  
![images](images/part1/run_with_export_ports.png)  

**9. Проверим, что в браузере по адресу localhost:80 доступна стартовая страница nginx**  
![images](images/part1/check_nginx_in_browser.png)  

**10. Перезапустим докер контейнер**  
![images](images/part1/restart.png)  

**11. Проверим, что контейнер запустился**  
![images](images/part1/ps3.png)  

## Part 2. Операции с контейнером  

**1. Прочитаем конфигурационный файл nginx.conf внутри докер контейнера через команду exec**  
![images](images/part2/nginx_config_container.png)  

**2. Создадим на локальной машине файл nginx.conf и настроем в нем по пути /status отдачу страницы статуса сервера nginx**  
![images](images/part2/nginx_config_file.png)  

**3. Скопируем созданный файл nginx.conf внутрь докер-образа**  
![images](images/part2/cp.png)  

**4. Перезапустим nginx внутри докер-образа через команду exec**  
![images](images/part2/reload_nginx.png)  

**5. Проверим, что по адресу localhost:80/status отдается страничка со статусом сервера nginx**  
![images](images/part2/working_nginx.png)  

**6. Экспортируем контейнер в файл container.tar через команду export.**  
![images](images/part2/export.png)  

**7. Остановим контейнер**  
![images](images/part2/stop.png)  

**8. Удалим образ nginx**  
![images](images/part2/rmi.png)  

**9. Удалим остановленный контейнер**  
![images](images/part2/rm.png)  

**10. Импортируй контейнер обратно через команду import**  
![images](images/part2/import.png)  

**11. Запустим импортированный контейнер**  
![images](images/part2/run.png)  

**12. Проверим, что по адресу localhost:80/status отдается страничка со статусом сервера nginx**  
![images](images/part2/check_work_nginx.png)  
