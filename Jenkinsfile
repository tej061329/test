pipeline {
    agent any 
    stages{
        stage('BUILD') {
            steps{
                 sh '''
                    cd /var/lib/jenkins/workspace/cpipeline
                      make ABC.exe
                '''
            }
        }
    }
}

