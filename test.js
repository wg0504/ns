var mysql = require('mysql');
var pool = mysql.createPool({
    connectionLimit: 10,
    host: '58.229.184.156',
    user: 'root',
    password: '0000',
    database: 'nsb',
    dateStrings: 'date'
});

const dbTest = async () => {


}