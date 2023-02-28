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
                    sleep 6
                    echo "This is a FIRST stage"
                '''
            }
        }

        stage('DEPLOY') {
            steps{
                sh '''
                    sleep 5
                    echo "This is a DEPLOY stage"
                    exit 1
                '''
            }
        }
        
        stage('TEST') {
            steps{
                sh '''
                    sleep 6
                    echo "This is a TEST stage"
                '''
            }
        }

        stage('FINAL') {
            steps{
                sh '''
                    sleep 5
                    echo "This is a FINAL stage"
                    exit 1
                '''
            }
        }
    }
}

