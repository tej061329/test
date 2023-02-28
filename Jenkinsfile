pipeline {
    agent any 
    stages{
        stage('BUILD') {
            steps{
                 sh '''
                    cd /var/lib/jenkins/workspace/cprograms
                      make ABC.exe
                '''
            }
        }
        stage('FIRST') {
            steps{
                sh '''
                    sleep 3
                    echo "This is a FIRST stage"
                    uname -a
                '''
            }
        }

        stage('DEPLOY') {
            steps{
                sh '''
                    sleep 2
                    echo "This is a DEPLOY stage"
                    hostname -i
                    exit 0
                '''
            }
        }
        
        stage('TEST') {
            steps{
                sh '''
                    sleep 2
                    echo "This is a TEST stage"
                    whoami
                '''
            }
        }

        stage('FINAL') {
            steps{
                sh '''
                    sleep 5
                    echo "This is a FINAL stage"
                    pwd
                    exit 0
                '''
            }
        }
    }
}

