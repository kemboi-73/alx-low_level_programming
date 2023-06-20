* {
	margin: 0;
	padding: 0;
	box-sizing: border-box;
}

body {
	background-color: #f2f2f2;
	font-family: Arial, sans-serif;
}

.container {
	max-width: 800px;
	margin: 0 auto;
	display: flex;
	justify-content: space-around;
	align-items: center;
	height: 100vh;
}

.login-form, .register-form {
	background-color: #fff;
	padding: 20px;
	border-radius: 10px;
	box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
	width: 45%;
	display: flex;
	flex-direction: column;
	align-items: center;
}

h2 {
	margin-bottom: 10px;
}

label {
	font-weight: bold;
	margin-top: 10px;
	margin-bottom: 5px;
}

input[type="text"], input[type="email"], input[type="password"] {
	padding: 10px;
	margin-bottom: 15px;
	border: none;
	border-radius: 5px;
	box-shadow: 0 0 5px rgba(0, 0, 0, 0.1);
}

input[type="submit"] {
	padding: 10px;
	border: none;
	border-radius: 5px;
	background-color: #007bff;
	color: #fff;
	font-weight: bold;
	cursor: pointer;
}

input[type="submit"]:hover {
	background-color: #0069d9;
}
