pipeline {
    agent any 
    stages{
        stage('BUILD') {
            steps{
                 sh '''
                    cd path
                      make ABC.exe
                '''
            }
        }
    }
}
